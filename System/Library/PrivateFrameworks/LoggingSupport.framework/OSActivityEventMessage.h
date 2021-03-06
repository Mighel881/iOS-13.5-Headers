/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSActivityEvent.h>

@class NSData, NSMutableArray, NSString;

@interface OSActivityEventMessage : OSActivityEvent {

	NSData* _bufferPrivateData;
	NSData* _bufferData;

}

@property (nonatomic,readonly) NSMutableArray * arguments; 
@property (copy,readonly) NSString * format; 
-(NSMutableArray *)arguments;
-(NSString *)format;
-(void)fillEventData:(const char*)arg1 length:(unsigned long long)arg2 privateBuffer:(const char*)arg3 length:(unsigned long long)arg4 ;
@end

