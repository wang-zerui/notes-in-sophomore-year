## Spooling

[SPOOLING_百度百科 (baidu.com)](https://baike.baidu.com/item/SPOOLING/1929253?fr=aladdin)

Overlap I/O of one job with computation of another job.  While executing one job the OS.

+ Reads next job from card reader into a storage area on the disk (job queue)
+ Outputs printout of previous job from disk to printer

*Job pool*-data structure that allows the OS to select which job to run nect in order to increase CPU utilization.

## Hardware Features

+ 内存保护
  + do not allow the memory area containing the monitor to be altered (程序不被其他人修改)
+ 定时
  + prevents a job from monopolizing the system