/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface UIInterfaceActionSection : NSObject <NSCopying> {

	NSArray* _actions;
	NSString* _sectionID;

}

@property (nonatomic,readonly) NSArray * actions;                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSString * sectionID;              //@synthesize sectionID=_sectionID - In the implementation block
+(id)actionsFromSections:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithActions:(id)arg1 ;
-(NSArray *)actions;
-(NSString *)sectionID;
-(id)copyOfActions;
@end

