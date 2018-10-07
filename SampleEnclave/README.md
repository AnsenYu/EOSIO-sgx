# prerequisite

install sgx on /root/sgx; 

build librand.so, run : make SGX_MODE=SIM

build add on run: node-gyp rebuild

run : ./run-example.sh

# current usage:

using demux-js to monitor eos-transfer, at each eos-transfer event, generate one real random with sgx(SIM_MODE).
