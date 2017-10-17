// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.


//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : mdsd_input_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "mdsd_input_reflection.h"
#include <bond/core/exception.h>

namespace mdsdinput
{
    
    const bond::Metadata Time::Schema::metadata
        = Time::Schema::GetMetadata();
    
    const bond::Metadata Time::Schema::s_sec_metadata
        = bond::reflection::MetadataInit("sec", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());
    
    const bond::Metadata Time::Schema::s_nsec_metadata
        = bond::reflection::MetadataInit("nsec");

    
    namespace _bond_enumerators
    {
    namespace FieldType
    {
        const
        std::map<std::string, enum FieldType> _name_to_value_FieldType =
            boost::assign::map_list_of<std::string, enum FieldType>
                ("FT_INVALID", FT_INVALID)
                ("FT_BOOL", FT_BOOL)
                ("FT_INT32", FT_INT32)
                ("FT_INT64", FT_INT64)
                ("FT_DOUBLE", FT_DOUBLE)
                ("FT_TIME", FT_TIME)
                ("FT_STRING", FT_STRING);

        const
        std::map<enum FieldType, std::string> _value_to_name_FieldType =
            bond::reverse_map(_name_to_value_FieldType);

        const std::string& ToString(enum FieldType value)
        {
            std::map<enum FieldType, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "FieldType");

            return it->second;
        }

        void FromString(const std::string& name, enum FieldType& value)
        {
            std::map<std::string, enum FieldType>::const_iterator it =
                _name_to_value_FieldType.find(name);

            if (_name_to_value_FieldType.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "FieldType");

            value = it->second;
        }

    } // namespace FieldType
    } // namespace _bond_enumerators

    
    const bond::Metadata FieldDef::Schema::metadata
        = FieldDef::Schema::GetMetadata();
    
    const bond::Metadata FieldDef::Schema::s_name_metadata
        = bond::reflection::MetadataInit("name", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());
    
    const bond::Metadata FieldDef::Schema::s_fieldType_metadata
        = bond::reflection::MetadataInit(::mdsdinput::_bond_enumerators::FieldType::FT_INVALID, "fieldType", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());

    
    const bond::Metadata SchemaDef::Schema::metadata
        = SchemaDef::Schema::GetMetadata();
    
    const bond::Metadata SchemaDef::Schema::s_fields_metadata
        = bond::reflection::MetadataInit("fields", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());
    
    const bond::Metadata SchemaDef::Schema::s_timestampFieldIdx_metadata
        = bond::reflection::MetadataInit("timestampFieldIdx");

    
    const bond::Metadata Message::Schema::metadata
        = Message::Schema::GetMetadata();
    
    const bond::Metadata Message::Schema::s_source_metadata
        = bond::reflection::MetadataInit("source", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());
    
    const bond::Metadata Message::Schema::s_msgId_metadata
        = bond::reflection::MetadataInit("msgId", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());
    
    const bond::Metadata Message::Schema::s_schemaId_metadata
        = bond::reflection::MetadataInit("schemaId", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());
    
    const bond::Metadata Message::Schema::s_schema_metadata
        = bond::reflection::MetadataInit("schema");
    
    const bond::Metadata Message::Schema::s_data_metadata
        = bond::reflection::MetadataInit("data", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());

    
    namespace _bond_enumerators
    {
    namespace ResponseCode
    {
        const
        std::map<std::string, enum ResponseCode> _name_to_value_ResponseCode =
            boost::assign::map_list_of<std::string, enum ResponseCode>
                ("ACK_SUCCESS", ACK_SUCCESS)
                ("ACK_FAILED", ACK_FAILED)
                ("ACK_UNKNOWN_SCHEMA_ID", ACK_UNKNOWN_SCHEMA_ID)
                ("ACK_DECODE_ERROR", ACK_DECODE_ERROR)
                ("ACK_INVALID_SOURCE", ACK_INVALID_SOURCE)
                ("ACK_DUPLICATE_SCHEMA_ID", ACK_DUPLICATE_SCHEMA_ID);

        const
        std::map<enum ResponseCode, std::string> _value_to_name_ResponseCode =
            bond::reverse_map(_name_to_value_ResponseCode);

        const std::string& ToString(enum ResponseCode value)
        {
            std::map<enum ResponseCode, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "ResponseCode");

            return it->second;
        }

        void FromString(const std::string& name, enum ResponseCode& value)
        {
            std::map<std::string, enum ResponseCode>::const_iterator it =
                _name_to_value_ResponseCode.find(name);

            if (_name_to_value_ResponseCode.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "ResponseCode");

            value = it->second;
        }

    } // namespace ResponseCode
    } // namespace _bond_enumerators

    
    const bond::Metadata Ack::Schema::metadata
        = Ack::Schema::GetMetadata();
    
    const bond::Metadata Ack::Schema::s_msgId_metadata
        = bond::reflection::MetadataInit("msgId", bond::reflection::required_field_modifier::value,
            bond::reflection::Attributes());
    
    const bond::Metadata Ack::Schema::s_code_metadata
        = bond::reflection::MetadataInit(::mdsdinput::_bond_enumerators::ResponseCode::ACK_SUCCESS, "code");

    
} // namespace mdsdinput