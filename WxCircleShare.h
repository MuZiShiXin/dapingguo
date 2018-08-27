//
//  WxCircleShare.h
//  UniversalApp
//
//  Created by Apple on 2018/8/1.
//  Copyright © 2018年 大苹果. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LTSheetItem : UIButton
- (instancetype)initWithFrame:(CGRect)frame withTitle:(NSString *)title imageNamed:(NSString *)imageNamed;
@end

@interface WxCircleShare : UIViewController
+ (WxCircleShare *)shareSheetControllerWithTitle:(NSString *)title topModels:(NSArray *)topModels;
@property (nonatomic, copy) void(^clickedTopAlertAction)(LTSheetItem* sheetItem,NSInteger index);
@property (nonatomic, copy) void(^clickedBotAlertAction)(LTSheetItem* sheetItem,NSInteger index);
@property (nonatomic, copy) void(^clickedCancel)(BOOL isCancel);
@end
