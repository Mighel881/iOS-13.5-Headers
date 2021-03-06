/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSSet, NSDictionary;


@protocol CRKSettingsPaneInfoProvider <NSObject>
@property (nonatomic,copy,readonly) NSArray * courses; 
@property (nonatomic,copy,readonly) NSArray * courseInvitations; 
@property (nonatomic,copy,readonly) NSSet * acceptedInvitationIdentifiers; 
@property (nonatomic,readonly) NSDictionary * observingInstructorIdentifiersByCourseIdentifiers; 
@required
-(NSArray *)courses;
-(NSArray *)courseInvitations;
-(NSSet *)acceptedInvitationIdentifiers;
-(NSDictionary *)observingInstructorIdentifiersByCourseIdentifiers;

@end

