#!/usr/bin/env bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
source /root/sgx/sgxsdk/environment
npm install > "/dev/null" 2>&1 && node index.js
