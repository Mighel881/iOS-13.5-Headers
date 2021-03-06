/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty

@property (nonatomic,retain) NSString * feature; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,retain) NSString * region; 
-(NSString *)region;
-(NSString *)info;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setRegion:(NSString *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

