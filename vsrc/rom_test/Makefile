export DESIGN=weights_rom

all:clean trans com run wave

trans:
	verilator --cc weights_rom.v

clean:
	rm -rf obj_dir *.vcd

com:
	verilator -Wall --trace --exe --build -cc sim_main.cpp weights_rom.v

run:
	./obj_dir/V$(DESIGN)

wave:
	gtkwave waveform.vcd

