/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSEntityDescription, NSManagedObjectContext;

@interface PHObjectDeleteValidator : NSObject {

	NSMutableSet* _deletedObjectIDs;
	NSEntityDescription* _entity;
	NSManagedObjectContext* _context;

}
-(id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)recordObjectID:(id)arg1 ;
-(BOOL)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id*)arg2 ;
@end

