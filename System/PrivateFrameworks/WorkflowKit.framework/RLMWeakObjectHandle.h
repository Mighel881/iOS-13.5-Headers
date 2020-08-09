/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying> {

	BasicRow<realm::Table>* _row;
	RLMClassInfo* _info;
	Class _objectClass;

}

@property (nonatomic,readonly) RLMObjectBase * object; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(RLMObjectBase *)object;
-(id)initWithObject:(id)arg1 ;
@end
