/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer {

	NSDateComponentsFormatter* _hoursMinutesFormatter;
	NSDateComponentsFormatter* _secondsFormatter;

}

@property (nonatomic,retain) NSDateComponentsFormatter * hoursMinutesFormatter;              //@synthesize hoursMinutesFormatter=_hoursMinutesFormatter - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * secondsFormatter;                   //@synthesize secondsFormatter=_secondsFormatter - In the implementation block
+(void)initialize;
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(NSDateComponentsFormatter *)secondsFormatter;
-(NSDateComponentsFormatter *)hoursMinutesFormatter;
-(void)setHoursMinutesFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setSecondsFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

