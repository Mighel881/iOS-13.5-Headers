/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface _DASLogEntry : NSObject {

	NSDate* _date;
	NSString* _category;
	NSString* _message;

}

@property (nonatomic,retain) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * message;               //@synthesize message=_message - In the implementation block
+(id)logEntryForDate:(id)arg1 category:(id)arg2 message:(id)arg3 ;
-(id)description;
-(NSDate *)date;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

