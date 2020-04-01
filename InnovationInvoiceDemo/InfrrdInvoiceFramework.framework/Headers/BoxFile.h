//
//  BoxFields.h
//  InfrrdInvoiceFramework
//
//  Created by yeshwanth on 13/05/19.
//  Copyright © 2019 Infrrd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BoxFile : NSObject
@property(nonatomic,assign) NSString *fileID;
-(id) initWithFileID:(NSString*) fileID;
@end
