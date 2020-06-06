/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface RKRankingInfo : NSManagedObject

@property (assign,nonatomic) long long responseId; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSString * response; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * recipientId; 
@property (assign,nonatomic) unsigned long long source; 
@property (assign,nonatomic) unsigned long long inputMethod; 
@property (nonatomic,retain) NSString * rankedList; 
@property (nonatomic,retain) NSDate * timestamp; 
@end
