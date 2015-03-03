libsu
=====
A library to add smooth upgrade function to your long tcp connection server.
project sponsor: Jeffery email: dungeonsnd@126.com, dungeonsnd@gmail.com


作者在开发实践中独立设计了一套对于tcp长连接进行平滑升级的方案.本项目旨在提炼这样的一个库，方便服务器架构和开发者集成平滑升级功能到自己的tcp长连接服务器中，以提高他们的应用可用性.

本项目仅支持类Unix环境(但时间关系仅在linux2.6.32及以上平台测试及使用过), 作者暂无支持其它环境的开发计划.

项目目前基本稳定, 作者已经将其用于某生产环境且运行良好. 暂无大规模修改计划. 但是请注意, 本项目还处于非稳定交付版本阶段, 建议用于非苛刻条件下的商业生产环境.

目前正在考虑申请软件专利,所以代码暂时加密不公开.


本项目的设计方案及所有代码的所有版权归作者所有,任何个人或单位不得非法使用.
如果使用请遵循下面的协议.如果想商业使用或者需要商业服务支持请联系作者.作者联系方式如下, 
Author: Jeffery Qiu
Email: dungeonsnd@126.com, dungeonsnd@gmail.com
QQ: 418527418


/*
Copyright 2014, Jeffery Qiu. All rights reserved. *
Licensed under the GNU LESSER GENERAL PUBLIC LICENSE(the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at *
http://www.gnu.org/licenses/lgpl.html *
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */
//// Author: Jeffery Qiu (dungeonsnd at 126 dot com, dungeonsnd at gmail dot com) ////
