/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>
#import <libobjc.A.dylib/MTSerializer.h>

@class NSCoder;

@interface MTStorageReaderV1 : NSKeyedUnarchiver <MTSerializer>

@property (nonatomic,readonly) unsigned long long mtType; 
@property (nonatomic,readonly) NSCoder * mtCoder; 
-(unsigned long long)mtType;
-(NSCoder *)mtCoder;
@end
