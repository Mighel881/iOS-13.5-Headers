/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, EMMailbox;


@protocol EMMailboxBuilder <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) BOOL canContainMessages; 
@property (assign,nonatomic) BOOL canArchive; 
@property (assign,nonatomic,__weak) EMMailbox * parent; 
@property (assign,nonatomic) BOOL descriptionUsesRealName; 
@required
-(NSString *)name;
-(EMMailbox *)parent;
-(long long)type;
-(void)setType:(long long)arg1;
-(void)setParent:(id)arg1;
-(void)setName:(id)arg1;
-(BOOL)canContainMessages;
-(void)setCanContainMessages:(BOOL)arg1;
-(void)setCanArchive:(BOOL)arg1;
-(BOOL)canArchive;
-(BOOL)descriptionUsesRealName;
-(void)setDescriptionUsesRealName:(BOOL)arg1;

@end
