/******************************************************************
 文件名称: Input.h
 系统名称: 移动平台
 模块名称: 客户端
 类 名 称: Input
 软件版权: 杭州长亮金融信息服务有限公司
 功能说明:
 系统版本:
 开发人员: 
 开发时间: 11-4-21
 审核人员:
 相关文档:
 修改记录: 需求编号 修改日期 修改人员 修改说明

 ******************************************************************/


#import <Foundation/Foundation.h>
#import "TYKeyboardDelegate.h"

#import "Control.h"
#import "HSTextField.h"


@interface Input : Control<UITextFieldDelegate, TYKeyboardDelegate>
{
    HSTextField     *_input;
    /**
     *  字符串发生变化的范围
     */
    NSInteger          cLocation;
    NSInteger          cLength;

}

- (void)textFieldDidChange:(UITextField *)textField;


-(BOOL)resignFirstResponder;

/**
 *  设置光标位置
 */
-(void)selectedRange:(NSRange)range;
@end
