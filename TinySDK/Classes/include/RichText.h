/******************************************************************
 文件名称: RichText.h
 系统名称: 移动平台
 模块名称: 客户端
 类 名 称: RichText
 软件版权: 杭州长亮金融信息服务有限公司
 功能说明:
 系统版本:
 开发人员: 
 开发时间: 11-9-10
 审核人员:
 相关文档:
 修改记录: 需求编号 修改日期 修改人员 修改说明
 
 ******************************************************************/

#import <Foundation/Foundation.h>

#import "Label.h"

@interface RichText : Label

@property(nonatomic, retain) NSMutableAttributedString *attributedText;

@end
