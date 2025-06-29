FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# 必要なツール群をインストール（gcc, g++, bazel など ）
RUN apt-get update && \
    apt-get install -y \
    build-essential \
    g++ \
    gcc \
    curl \
    git \
    unzip \
    python3 \
    python3-pip \
    software-properties-common && \
    apt-get clean

# Bazel用の追加セットアップ（例：aptリポジトリ追加）
RUN curl -fsSL https://bazel.build/bazel-release.pub.gpg | gpg --dearmor > /etc/apt/trusted.gpg.d/bazel.gpg && \
    echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" > /etc/apt/sources.list.d/bazel.list && \
    apt-get update && \
    apt-get install -y bazel

WORKDIR /workspace
