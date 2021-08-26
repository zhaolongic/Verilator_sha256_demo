# Verilator文档

## 1. `RTL`

`rtl`文件存在于`verilator/project/rtl`下

你可以在该文件夹下添加任意后缀为`.v`、`.sv`的文件，但是要编写一个`top.v`（非常不建议使用其他字符作为文件名，建议直接用模板的代码进行修改）为这些文件的顶层，方便被`verilator`调用。

在`top.v`中，需要修改的部分为：

- 根据需求修改module `top` 中的信号名
- 根据需求例化其他`rtl`的module

不建议做出其他更改。



## 2. `CPP`

`cpp`的头文件在`verilator_test/project/cpp/includes`下，可以在`addr.h`下更改寄存器地址，在`func.h`下更改函数

`cpp`的软件代码存在于`top_tb.cpp`下，其中的主要函数在`func.cpp`下

`func.cpp`中的实例化函数以 APB 协议为基础的，如果用 AXI 协议则需要修改。

`top_tb.cpp` 的 `main` 函数，可以以如下方式修改：

- 不建议更改各个软件代码文件的名字
- 第一段不需要修改，这是`Verilator`的初始化调用
- 参数`state`用于`APB-SHA256`的逻辑，如果不需要可以删掉
- 由于软件产生激励逻辑使用的是`while()`函数，使用参数`break_point`来标志仿真逻辑是否结束。`break_point`可以通过软件产生，也可以通过硬件信号产生
- 通过设置参数`clk_cycle`的大小来控制你想产生的时钟周期大小（也可以不更改
- 对于任何信号线上的数据，需要用`top->signname`的方式来读取或控制
- 在`while()`下来实现你的tb逻辑



## 3. `Makefile`

在`verilator_test/build`下输入可做的操作如下

- 编译、仿真

  ```sh
  make all
  ```

- 仅编译

  ```sh
  make compile
  ```

- 仅仿真

  ```sh
  make sim
  ```

- 打开波形文件

  ```sh
  make wave
  ```

- 清除过程文件

  ```sh
  #如果发现修改文件后一直报错，也可以尝试该命令
  make clean
  ```

编译、仿真产生的过程文件在`verilator_test/build/obj_dir`目录下

波形文件保存在`verilator_test/build/logs`目录下

