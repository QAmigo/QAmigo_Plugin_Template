# QAmigo plugin template

Template project for writing QAmigo plugins.

- [QAmigo plugin template](#qamigo-plugin-template)
- [How to use](#how-to-use)
- [如何使用](#%e5%a6%82%e4%bd%95%e4%bd%bf%e7%94%a8)

# How to use

1. Clone this project.
2. Change name of the project and target in .pro of this project to the name you want.
3. Change the "INCLUDEPATH += ..." in .pro file to the source folder of "TabPluginInterface.h", which should be located in the "src" folder of [QAmigo](https://github.com/QAmigo/QAmigo)
4. Optionally, change the DESTDIR to "[Standard documents folder of your computer]/QSerial Socket Amigo/plugins". This is the default path QAmigo will search for the plugins.
5. Write some code, add some widgets and build the project.

You can go to QAmigo's README.md to see how to write working plugins.

There will also be some examples like the [3D Box](https://github.com/QAmigo/3DBox) in the [orgnization page](https://github.com/QAmigo) to show you how to write plugins.

# 如何使用

1. clone下来这个项目。
2. 修改项目名和.pro文件中生成的二进制目标文件的名字到你想要的名字。
3. 修改.pro文件中的"INCLUDEPATH += ..."加上[QAmigo](https://github.com/QAmigo/QAmigo)的src目录，包含"TabPluginInterface.h"进来。
4. 可选，更改DESTDIR到"[电脑上的标准的Documents目录]/QSerial Socket Amigo/plugins"，这个目录是QAmigo寻找共享库插件的默认路径。
5. 在项目里添加些按键，label什么的，然后编译就可以测试了。

如何编写控件在[QAmigo项目的README.md](https://github.com/QAmigo/QAmigo#how-to-write)中可以看到。

还可以参考[项目页面](https://github.com/QAmigo)中像[3D Box](https://github.com/QAmigo/3DBox)一样的例程来看插件是怎么编写的。