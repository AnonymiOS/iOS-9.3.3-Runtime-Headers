/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > {
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __first_;
} compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >;

typedef struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > {
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __begin_;
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __end_;
	compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > __end_cap_;
} vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >;

typedef struct {
	unsigned uppercase : 1;
	unsigned autoshifted : 1;
	unsigned popupVariant : 1;
	unsigned multitap : 1;
	unsigned flick : 1;
	unsigned synthesizedByAcceptingCandidate : 1;
} SCD_Struct_TI4;

typedef union {
	long long integerValue;
	SCD_Struct_TI4 fields;
} SCD_Union_TI5;

typedef struct {
	unsigned canHandleKeyHitTest : 1;
	unsigned ignoresDeadKeys : 1;
	unsigned needsKeyHitTestResults : 1;
	unsigned shouldExtendPriorWord : 1;
	unsigned suppliesCompletions : 1;
	unsigned supportsNumberKeySelection : 1;
	unsigned supportsSetPhraseBoundary : 1;
	unsigned suppressCompletionsForFieldEditor : 1;
	unsigned usesAutoDeleteWord : 1;
	unsigned usesCandidateSelection : 1;
	unsigned commitsAcceptedCandidate : 1;
	unsigned nextInputWouldStartSentence : 1;
	unsigned inputStringIsExemptFromChecker : 1;
	unsigned suppressPlaceholderCandidate : 1;
	unsigned usesAutocorrectionLists : 1;
} SCD_Struct_TI6;

typedef union {
	long long integerValue;
	SCD_Struct_TI6 fields;
} SCD_Union_TI7;

typedef struct {
	unsigned userSelectedCurrentCandidate : 1;
	unsigned shouldSkipCandidateSelection : 1;
	unsigned suppressingCandidateSelection : 1;
	unsigned needsCandidateMetadata : 1;
	unsigned keyboardEventsLagging : 1;
	unsigned hardwareKeyboardMode : 1;
	unsigned splitKeyboardMode : 1;
	unsigned wordLearningEnabled : 1;
	unsigned autocorrectionEnabled : 1;
	unsigned shortcutConversionEnabled : 1;
	unsigned candidateSelectionPredictionEnabled : 1;
	unsigned autocapitalizationEnabled : 1;
} SCD_Struct_TI8;

typedef union {
	long long integerValue;
	SCD_Struct_TI8 fields;
} SCD_Union_TI9;

typedef struct {
	unsigned displayed : 1;
	unsigned autoDisplayMode : 1;
} SCD_Struct_TI10;

typedef union {
	long long integerValue;
	SCD_Struct_TI10 fields;
} SCD_Union_TI11;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	id field1;
	id field2;
	BOOL field3;
	BOOL field4;
	unsigned long long field5;
	int field6;
} SCD_Struct_TI13;

typedef struct {
	id field1;
	id field2;
	int field3;
	id field4;
	id field5;
	int field6;
} SCD_Struct_TI14;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_TI15;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_TI15 rangeToBuffer;
	long long bufferedRangeStart;
	long long bufferedRangeEnd;
} SCD_Struct_TI16;

typedef struct {
	unsigned autocapitalizationType : 2;
	unsigned autocorrectionType : 2;
	unsigned spellCheckingType : 2;
	unsigned keyboardType : 4;
	unsigned keyboardAppearance : 2;
	unsigned returnKeyType : 4;
	unsigned enablesReturnKeyAutomatically : 1;
	unsigned secureTextEntry : 1;
} SCD_Struct_TI17;

typedef union {
	long long integerValue;
	SCD_Struct_TI17 fields;
} SCD_Union_TI18;

