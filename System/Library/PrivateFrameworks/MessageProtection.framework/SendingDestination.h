/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface SendingDestination : NSManagedObject

@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,copy) NSDate * registrationDate; 
@property (assign,nonatomic) int validOutgoingCounter; 
+(id)fetchRequest;
@end
