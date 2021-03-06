/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

@interface UITextReplacementCandidate : TIKeyboardCandidateSingle {

	UITextReplacement* _replacement;

}

@property (nonatomic,readonly) UITextReplacement * replacement;              //@synthesize replacement=_replacement - In the implementation block
+(id)textReplacementCandidateForTextReplacement:(id)arg1 ;
-(id)label;
-(id)_initWithTextReplacement:(id)arg1 ;
-(UITextReplacement *)replacement;
@end

