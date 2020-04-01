//
//  TextFields.h
//  InfrrdInvoiceFramework
//
//  Created by Shashank shukla on 24/09/19.
//  Copyright © 2019 Infrrd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TextFields : NSObject

@property (nonatomic,strong) NSString *text;
@property (nonatomic,strong) UIFont *font;
@property (nonatomic,strong) UIColor *fontColor;

-(instancetype)initWithText:(NSString*)text andFont: (UIFont*) font;
-(instancetype)initWithText:(NSString*)text andFont: (UIFont*) font andFontColor: (UIColor*) fontColor;

@end
