/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSArray;

@interface OSLogEventBacktrace : NSObject {

	NSArray* _frames;

}

@property (nonatomic,readonly) NSArray * frames;              //@synthesize frames=_frames - In the implementation block
-(void)dealloc;
-(NSArray *)frames;
-(id)initWithBacktrace:(os_log_backtrace_s*)arg1 ;
-(id)initWithSingleFrame:(id)arg1 ;
@end

