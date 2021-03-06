/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface CNContactImageManagedObject : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSString * contactIdentifier; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,retain) NSDate * lastUsedDate; 
@property (nonatomic,retain) NSString * cropRectString; 
@property (nonatomic,retain) NSNumber * source; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (nonatomic,retain) NSString * variant; 
+(/*^block*/id)managedObjectToContactImageTransform;
-(id)cropRectStringFromCGRect:(CGRect)arg1 ;
-(void)updateWithContactImage:(id)arg1 ;
-(void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2 ;
@end

