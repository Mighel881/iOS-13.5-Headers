/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKUserDefaultsObject.h>

@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject {

	NSSet* _classes;

}

@property (nonatomic,copy,readonly) NSSet * classes;              //@synthesize classes=_classes - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSSet *)classes;
-(id)valueWithError:(id*)arg1 ;
-(id)initWithKey:(id)arg1 classes:(id)arg2 ;
-(void)registerDefaultValue:(id)arg1 ;
-(id)initWithStore:(id)arg1 key:(id)arg2 classes:(id)arg3 ;
-(BOOL)setValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3 ;
@end

