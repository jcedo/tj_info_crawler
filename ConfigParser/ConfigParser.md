### 功能描述：将/yum.conf中的配置转换至主函数内（单例）
#### 技术要点
- 按行读取fgets
- 分割字符串
- 清楚注释
- 消除空格

#### 类内描述

|成员名称|含义|备注|
|-----|-----|-----|
|job_nums|并发任务数||
|seed|url种子||
|deeps|抓取深度||
|log_level|输出日志等级||
|module_path|模块存放路径||
|module_name|模块名称||
|file_type|允许抓取的资源类型||