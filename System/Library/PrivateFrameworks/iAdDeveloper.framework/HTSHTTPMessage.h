/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableDictionary, NSData, NSString;

@interface HTSHTTPMessage : NSObject {

	NSMutableDictionary* _headers;
	NSData* _body;
	NSString* _versionString;

}

@property (nonatomic,copy) NSString * versionString;                     //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * body;                              //@synthesize body=_body - In the implementation block
-(void)dealloc;
-(void)setVersionString:(NSString *)arg1 ;
-(NSString *)versionString;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(id)valueForHeaderField:(id)arg1 ;
-(void)setHeaders:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)headers;
-(void)addHeadersToMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
@end

