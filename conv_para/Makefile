
all: clean py trans sim run compare

VSRCS = $(shell find $(./vsrc ) -name "*.v")
CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cc" -or -name "*.cpp" -or -name "*.h")

INCLUDE = ./vsrc/include
VSRCDIR = ./vsrc
CSRCDIR = ./csrc

trans:
	verilator --cc ./vsrc/conv1.v \
	-I$(VSRCDIR)


sim:
	@echo $(VSRCS)
	verilator --trace --cc --exe --build \
    -I$(VSRCDIR) ./csrc/sim_conv1.cpp ./vsrc/conv1.v
run:
	./obj_dir/Vconv1

wave:
	gtkwave waveform.vcd

clean:
	rm -rf obj_dir
	rm -rf *.vcd
	rm -rf ./*.txt

py:
	python ./csrc/convtest.py

compare:
	python comp.py

