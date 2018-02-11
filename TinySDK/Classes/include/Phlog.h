//
//  Phlog.h
//  TinyBuilder
//
//  Created by apple on 16/9/14.
//  Copyright © 2016年 Sunline. All rights reserved.
//

#ifndef Phlog_h
#define Phlog_h


#endif /* Phlog_h */

#ifdef DEBUG
#define PhLog(format, ...) NSLog(format, ## __VA_ARGS__)
#else
#define PhLog(format, ...)
#endif
