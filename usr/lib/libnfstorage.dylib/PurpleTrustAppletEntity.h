/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnfstorage.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSObject, NSString, NSSet;

@interface PurpleTrustAppletEntity : NSManagedObject

@property (nonatomic,retain) NSObject * blob; 
@property (nonatomic,copy) NSString * uniqueIdentifier; 
@property (assign,nonatomic) int version; 
@property (nonatomic,retain) NSSet * purpleTrust; 
+(id)fetchRequest;
@end
