/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSData;

@interface DownloadRecord : NSManagedObject

@property (nonatomic,copy) NSString * application; 
@property (nonatomic,copy) NSUUID * downloadId; 
@property (assign,nonatomic) double requestTime; 
@property (nonatomic,retain) NSData * response; 
@property (assign,nonatomic) long long startSLHRevision; 
+(id)fetchRequest;
@end

