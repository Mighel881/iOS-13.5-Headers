/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/TextInput/TextInput_th.bundle/TextInput_th
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_th/TextInput_th-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_th : TIKeyboardInputManager
-(id)keyboardBehaviors;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(void)candidateRejected:(id)arg1 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(TIInputManager*)initImplementation;
-(id)trimmedInputStem;
-(void)setWordBoundary;
@end
