# verilator_test
**一.在ubuntu20.04上安装verilator和gtkwave**
  1.安装`verilator`
        
        源代码下载：
        git clone git@github.com:verilator/verilator.git 
        下载依赖：   
        sudo apt-get install perl python3 make autoconf g++ flex bison ccache libgoogle-perftools-dev numactl perl-doc libfl2 libfl-dev zlibc zlib1g zlib1g-dev       
        设置环境变量：      
        export VERILATOR_ROOT=/path_to_install
        export PATH=$VERILATOR_ROOT:$PATH        
        运行：
        autoconf
        ./configure
        make
        make test
        sudo make install
        
  2.安装`gtkwave`
        
        源代码下载地址
        http://gtkwave.sourceforge.net/      
        解压
        tar -xzvf xx.tar.gz    
        运行：
        ./autogen.sh
        ./configure
        make
        sudo make install
        
二.使用`verilator`仿真一个`example`并显示出`waveform`
        
        在`build`目录下输入如下命令分别可运行：
        //运行编译、仿真
        make all
        //仅编译
        make vcompile
        //仅仿真
        make sim
        //打开gtkwave
        make wave
        
