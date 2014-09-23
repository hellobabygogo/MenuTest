1. 这是一个工程项目，所以需要下载Dev-c++，创建一个工程并把linktable.h linktable.c menu.h menu.c test.c添加到工程中。 创建的时候选择console Application ，选C工程。

2. 因为工程中默认是main.c，所以需要把除test.c中代码拷贝到main.c中

3. 因为该项目的linktable.h中使用到pthread.h的头文件，但是在windows下需要去下载Windows版本的pthread

   1. 载Windows版本的pthread
      目前最新版本是：pthreads-w32-2-9-1-release.zip。
      主页地址：http://sourceware.org/pthreads-win32/
      ftp地址：ftp://sourceware.org/pub/pthreads-win32/

   2. 解压pthread到指定目录：我选择的目录是：D:\DEV-CPP\Pthread

      解压pthreads-w32-2-9-1-release.zip。
      完成后，该目录会多出三个文件夹：。Pre-built.2，pthreads.2，QueueUserAPCEx。

   3. 配置Dev-C++编译选项
      以中文版的Dev-C++为例：

      1)点击“工具”→“编译选项”→“目录”→“c++包含文件”，浏览到刚才解压的pthread目录，选择D:\Program Files\DEV-CPP\Pthread\Pre-built.2\include，添加。

      2)点击“工具”→“编译选项”→“目录”→“库”，浏览到刚才解压的pthread目录，选择D:\Program Files\DEV-CPP\Pthread\Pre-built.2\lib，添加。 

   4、配置Dev-C++当前工程属性
      提示：如果是在DevCpp中新建一个文件，“工程-工程属性”是不可用的，所以，应该先新建一个工程，然后再在该工程中添加多线程的文件。
     点击“工程”→”工程属性”→“参数”→“加入库或者对象”，
     选中D:\Program Files\DEV-CPP\Pthread\Pre-built.2\lib\libpthreadGC2.a，确定。
   
   5. 可能报错：pthreadGC2.DLL不存在。需要把解压中的该文件拷贝到system32目录下。
   
   6.  如果解决不了可以找我！

4. main.c执行步骤
   输入要查询的cmd -> 输出结果
   创建一个cmd -> 输入cmd 和 desc（ps:yes  this is a yes cmd）->输出创建结果
   删除一个cmd ->输入要删除的cmd- >输出删除结果


或者用ubantu的gcc编译 linktable.c menu.c test.c -o  test
                 运行 ./test
    
   