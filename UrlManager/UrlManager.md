### 功能描述：维护url
#### 技术点
- http协议请求页面流程
    
    1. 输入网址
    2. 向DNS发送解析请求
    3. DNS返回IP地址
    4. 通过IP地址向资源所在的主机发送请求
    5. 资源存在，主机返回状态码200，同时返回http数据部分；
    6. 本地http客户端（一般浏览器）接受数据
    7. 得到资源

- 页面抓取的处理流程

    1. 得到url
    2. url进入`抓取队列`
    3. 从队列中得到一个url。分配给一个`下载器实例`
    4. 得到下载器的出来状态（isget，deep，filetype）
    5. 当前页面上得到下一级`url列表`

#### 类内成员变量描述

|成员名称|含义|备注|
|-----|-----|-----|
|url|完整url||
|protocal|协议类型||
|sitename|域名||
|path|资源路径||
|filename|文件名||
|isget|当前url处理状态|0-未抓取，1-成功，2-抓取失败|
|deep|当前url深度||
|filetype|当前资源类型||

#### 类内成员函数描述（对外的接口）

|成员名称|含义|备注|
|-----|-----|-----|
||添加新的url||
||是url进入抓取队列||
||从抓取队列中移除一个url||
||修改url库中某一个url的值||
||添加新url的列表||