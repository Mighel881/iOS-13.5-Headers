/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (assign,nonatomic) BOOL hasSynced; 
@property (nonatomic,retain) NSData * metadata; 
@property (nonatomic,copy) NSString * syncServiceIdentifier; 
@property (nonatomic,retain) VCVoiceShortcutManagedObject * voiceShortcut; 
+(id)fetchRequest;
@end
