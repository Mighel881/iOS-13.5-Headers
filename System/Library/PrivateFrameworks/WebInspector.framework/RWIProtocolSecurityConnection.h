/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolSecurityConnection : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * protocol; 
@property (nonatomic,copy) NSString * cipher; 
-(NSString *)protocol;
-(void)setProtocol:(NSString *)arg1 ;
-(NSString *)cipher;
-(void)setCipher:(NSString *)arg1 ;
@end
