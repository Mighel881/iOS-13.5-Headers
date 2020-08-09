/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/UNSAttachmentDataProvider.h>

@class NSURL, NSString;

@interface UNSAttachmentData : NSObject <NSCopying, UNSAttachmentDataProvider> {

	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFileValid:(id)arg1 ;
+(BOOL)isFileAtURL:(id)arg1 validForFamily:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataForFamily:(unsigned long long)arg1 fromFileURL:(id)arg2 error:(id*)arg3 ;
+(Class)dataClassForFamily:(unsigned long long)arg1 ;
+(id)dataFromFileURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
@end
