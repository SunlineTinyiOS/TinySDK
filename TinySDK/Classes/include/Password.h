/******************************************************************
 文件名称: Password.h
 系统名称: 移动平台
 模块名称: 客户端
 类 名 称: Password
 软件版权: 杭州长亮金融信息服务有限公司
 功能说明:
 系统版本:
 开发人员: 
 开发时间:
 审核人员:
 相关文档:
 修改记录: 需求编号 修改日期 修改人员 修改说明
 
 ******************************************************************/

#import <UIKit/UIKit.h>
#import "Input.h"
#import "TYNumberPad.h"
#import "TYPasswordCover.h"

typedef void(^TextChangeBlock) (id anObject);

@interface Password : Input{
}


@property(nonatomic, retain) TYNumberPad *kbd;

@property(retain, nonatomic) TYPasswordCover *cover;

@property(nonatomic, copy) TextChangeBlock textChangeBlock;

@end
