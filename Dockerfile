FROM ubuntu:24.04 AS builder

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    cmake \
    g++ \
    make && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . .

RUN cmake -S . -B build -DCMAKE_BUILD_TYPE=Release && \
    echo "===== cmake configure done ====="

RUN cmake --build build && \
    echo "===== cmake build done ====="
RUN echo "===== build dir =====" && \
    ls -la /app
RUN echo "===== build contents =====" && \
    ls -la /app/build
RUN echo "===== all files under build =====" && \
    find /app/build -maxdepth 3 -type f -print

FROM ubuntu:24.04

WORKDIR /app
COPY --from=builder /app/build/deploy-project /app/execute

CMD ["./execute"]