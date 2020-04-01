//
//  InfrrdOCR.m
//  InfrrdOCRFramework
//
//  Created by Manu Mohan on 26/04/18.
//  Copyright © 2018 Infrrd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BoxFile.h"

typedef void(^completion)(BOOL);

@protocol InfrrdPDFDelegate;
@interface InffrdInvoice : NSObject
@property (nonatomic, weak) id<InfrrdPDFDelegate> pdfDelegate;

+(InffrdInvoice*)sharedInstance;

-(void)dismissFrameWork;
-(UIViewController *) viewControllerForInfrrdInvoiceWithBoxToken:(NSString *)token;
-(UIViewController *) viewControllerForInfrrdInvoiceWithBoxToken:(NSString *)token andAutoCaptureMode:(BOOL)on;
-(UIViewController *) viewControllerForInfrrdInvoiceWithBoxToken:(NSString *)token andUploadFolderId:(NSString *)folderID;
-(UIViewController *) viewControllerForInfrrdInvoiceWithBoxToken:(NSString *)token andUploadFolderId:(NSString *)folderID andAutoCaptureMode:(BOOL)on;
@end

@protocol INFNavigationDelegate <NSObject>
-(void)popToPresentingVC: (completion)completion;
@end


@protocol InfrrdPDFDelegate <NSObject>
@optional
-(void)infrrdOCR:(InffrdInvoice *)infrrdOCR pdfWithName:(NSString *)filename uploadProgress:(NSProgress *)progress;
-(void)infrrdOCR:(InffrdInvoice *)infrrdOCR pdfuploadSuccessForFileWithName:(NSString *)filename andBoxFieldsList:(NSArray<BoxFile*>*)boxFieldsList;
-(void)infrrdOCR:(InffrdInvoice *)infrrdOCR didFailWithError:(NSError *) error;
@end
