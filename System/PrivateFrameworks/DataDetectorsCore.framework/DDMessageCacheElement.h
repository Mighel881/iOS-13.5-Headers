/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface DDMessageCacheElement : NSObject {

	NSString* _text;
	NSDate* _date;

}

@property (retain) NSString * text;              //@synthesize text=_text - In the implementation block
@property (retain) NSDate * date;                //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

