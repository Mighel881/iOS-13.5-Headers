/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SYChange <NSObject>
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@required
-(long long)changeType;
-(NSString *)objectIdentifier;
-(NSString *)sequencer;

@end

