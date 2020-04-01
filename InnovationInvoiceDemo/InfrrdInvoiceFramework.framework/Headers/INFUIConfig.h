//
//  INFUIConfig.h
//  InfrrdOCRFramework
//
//  Created by Avismara HL on 04/05/18.
//  Copyright © 2018 Infrrd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TextFields.h"


@interface INFUIConfig : NSObject

+(id)sharedInstance;

@property (nonatomic, strong) TextFields *backButtonText;
@property (nonatomic, strong) NSString *blurImageMessage;
@property (nonatomic, strong) NSString *darkImageMesssage;
//@property (nonatomic, strong) NSString *tryAgainText;
//@property (nonatomic, strong) NSString *proceedText;
@property (nonatomic,assign) CGFloat saveButtonCornerRadius;
@property (nonatomic,strong) TextFields *cameraScreenTitle;
@property (nonatomic, strong) TextFields *autoModeToggleText;
@property (nonatomic, strong) TextFields *tapToResumeCaptureText;
@property (nonatomic, strong) NSString *noInternetErrorMessage;
@property (nonatomic, strong) NSString *accessDeniedMessage;
@property (nonatomic, strong) NSString *uploadFailedMessage;
//@property (nonatomic, strong) NSString *networkErrorMessage;
@property (nonatomic,strong) TextFields *previewScreenTitle;
@property (nonatomic,strong) TextFields *previewlabel;
@property (nonatomic, strong) TextFields *saveDocumentText;
@property (nonatomic, strong) NSString *uploadSuccessfulMessage;
@property (nonatomic, strong) NSString *uploadSuccesTitle;
@property (nonatomic, strong) NSString *uploadFailedTitle;
@property (nonatomic,strong) NSString *okText;
@property (nonatomic,strong) NSString *tryAgainText;
@property (nonatomic,strong) NSString *caneclText;
@property (nonatomic, strong) UIColor *primaryColor;
@property (nonatomic, strong) UIColor *secondaryColor;
@property (nonatomic, strong) UIColor *collectionViewBackground;
@property (nonatomic, strong) UIColor *saveDocumentButtonBackground;
@property (nonatomic, strong) UIColor *arrowButtonColor;


@end
