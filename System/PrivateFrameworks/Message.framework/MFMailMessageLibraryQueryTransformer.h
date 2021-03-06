/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/MFMessageCriterionConverterDelegate.h>

@class MFMessageCriterionConverter, EDMessagePersistence, NSString;

@interface MFMailMessageLibraryQueryTransformer : NSObject <EFLoggable, MFMessageCriterionConverterDelegate> {

	MFMessageCriterionConverter* _criterionConverter;
	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,retain) MFMessageCriterionConverter * criterionConverter;                //@synthesize criterionConverter=_criterionConverter - In the implementation block
@property (nonatomic,__weak,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(EDMessagePersistence *)messagePersistence;
-(MFMessageCriterionConverter *)criterionConverter;
-(long long)messageCriterionConverter:(id)arg1 criterionTypeForKey:(id)arg2 ;
-(id)messageCriterionConverter:(id)arg1 expressionForConstantValue:(id)arg2 withCriterionType:(long long)arg3 ;
-(id)mailAccountForIdentifier:(id)arg1 ;
-(id)initWithMessagePersistence:(id)arg1 ;
-(id)criterionForQuery:(id)arg1 ;
-(unsigned)optionsForQuery:(id)arg1 ;
-(void)setCriterionConverter:(MFMessageCriterionConverter *)arg1 ;
@end

