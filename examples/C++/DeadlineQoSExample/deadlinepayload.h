/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * _LICENSE file included in this  distribution.
 *
 *************************************************************************
 * 
 * @file deadlinepayload.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _deadlinepayload_H_
#define _deadlinepayload_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(deadlinepayload_SOURCE)
#define deadlinepayload_DllAPI __declspec( dllexport )
#else
#define deadlinepayload_DllAPI __declspec( dllimport )
#endif // deadlinepayload_SOURCE
#else
#define deadlinepayload_DllAPI
#endif
#else
#define deadlinepayload_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

/*!
 * @brief This class represents the structure HelloMsg defined by the user in the IDL file.
 * @ingroup DEADLINEPAYLOAD
 */
class HelloMsg
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport HelloMsg();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~HelloMsg();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object HelloMsg that will be copied.
     */
    eProsima_user_DllExport HelloMsg(const HelloMsg &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object HelloMsg that will be copied.
     */
    eProsima_user_DllExport HelloMsg(HelloMsg &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object HelloMsg that will be copied.
     */
    eProsima_user_DllExport HelloMsg& operator=(const HelloMsg &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object HelloMsg that will be copied.
     */
    eProsima_user_DllExport HelloMsg& operator=(HelloMsg &&x);
    
    /*!
     * @brief This function sets a value in member deadlinekey
     * @param _deadlinekey New value for member deadlinekey
     */
    inline eProsima_user_DllExport void deadlinekey(uint16_t _deadlinekey)
    {
        m_deadlinekey = _deadlinekey;
    }

    /*!
     * @brief This function returns the value of member deadlinekey
     * @return Value of member deadlinekey
     */
    inline eProsima_user_DllExport uint16_t deadlinekey() const
    {
        return m_deadlinekey;
    }

    /*!
     * @brief This function returns a reference to member deadlinekey
     * @return Reference to member deadlinekey
     */
    inline eProsima_user_DllExport uint16_t& deadlinekey()
    {
        return m_deadlinekey;
    }
    /*!
     * @brief This function copies the value in member payload
     * @param _payload New value to be copied in member payload
     */
    inline eProsima_user_DllExport void payload(const std::string &_payload)
    {
        m_payload = _payload;
    }

    /*!
     * @brief This function moves the value in member payload
     * @param _payload New value to be moved in member payload
     */
    inline eProsima_user_DllExport void payload(std::string &&_payload)
    {
        m_payload = std::move(_payload);
    }

    /*!
     * @brief This function returns a constant reference to member payload
     * @return Constant reference to member payload
     */
    inline eProsima_user_DllExport const std::string& payload() const
    {
        return m_payload;
    }

    /*!
     * @brief This function returns a reference to member payload
     * @return Reference to member payload
     */
    inline eProsima_user_DllExport std::string& payload()
    {
        return m_payload;
    }
    
    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;
    
private:
    uint16_t m_deadlinekey;
    std::string m_payload;
};

#endif // _deadlinepayload_H_