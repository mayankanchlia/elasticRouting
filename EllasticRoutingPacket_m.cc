//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/ellasticRouting/EllasticRoutingPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "EllasticRoutingPacket_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(EllasticRoutingPacket);

EllasticRoutingPacket::EllasticRoutingPacket(const char *name, int kind) : ::RoutingPacket(name,kind)
{
    this->source_var = 0;
    this->destination_var = 0;
    this->x_src_var = 0;
    this->y_src_var = 0;
    this->x_dst_var = 0;
    this->y_dst_var = 0;
}

EllasticRoutingPacket::EllasticRoutingPacket(const EllasticRoutingPacket& other) : ::RoutingPacket(other)
{
    copy(other);
}

EllasticRoutingPacket::~EllasticRoutingPacket()
{
}

EllasticRoutingPacket& EllasticRoutingPacket::operator=(const EllasticRoutingPacket& other)
{
    if (this==&other) return *this;
    ::RoutingPacket::operator=(other);
    copy(other);
    return *this;
}

void EllasticRoutingPacket::copy(const EllasticRoutingPacket& other)
{
    this->source_var = other.source_var;
    this->destination_var = other.destination_var;
    this->x_src_var = other.x_src_var;
    this->y_src_var = other.y_src_var;
    this->x_dst_var = other.x_dst_var;
    this->y_dst_var = other.y_dst_var;
}

void EllasticRoutingPacket::parsimPack(cCommBuffer *b)
{
    ::RoutingPacket::parsimPack(b);
    doPacking(b,this->source_var);
    doPacking(b,this->destination_var);
    doPacking(b,this->x_src_var);
    doPacking(b,this->y_src_var);
    doPacking(b,this->x_dst_var);
    doPacking(b,this->y_dst_var);
}

void EllasticRoutingPacket::parsimUnpack(cCommBuffer *b)
{
    ::RoutingPacket::parsimUnpack(b);
    doUnpacking(b,this->source_var);
    doUnpacking(b,this->destination_var);
    doUnpacking(b,this->x_src_var);
    doUnpacking(b,this->y_src_var);
    doUnpacking(b,this->x_dst_var);
    doUnpacking(b,this->y_dst_var);
}

const char * EllasticRoutingPacket::getSource() const
{
    return source_var.c_str();
}

void EllasticRoutingPacket::setSource(const char * source)
{
    this->source_var = source;
}

const char * EllasticRoutingPacket::getDestination() const
{
    return destination_var.c_str();
}

void EllasticRoutingPacket::setDestination(const char * destination)
{
    this->destination_var = destination;
}

int EllasticRoutingPacket::getX_src() const
{
    return x_src_var;
}

void EllasticRoutingPacket::setX_src(int x_src)
{
    this->x_src_var = x_src;
}

int EllasticRoutingPacket::getY_src() const
{
    return y_src_var;
}

void EllasticRoutingPacket::setY_src(int y_src)
{
    this->y_src_var = y_src;
}

int EllasticRoutingPacket::getX_dst() const
{
    return x_dst_var;
}

void EllasticRoutingPacket::setX_dst(int x_dst)
{
    this->x_dst_var = x_dst;
}

int EllasticRoutingPacket::getY_dst() const
{
    return y_dst_var;
}

void EllasticRoutingPacket::setY_dst(int y_dst)
{
    this->y_dst_var = y_dst;
}
int EllasticRoutingPacket::getType(){
    return packet_type;
}
void EllasticRoutingPacket::setType(int packet_type)
{
    this->packet_type = packet_type;
}

class EllasticRoutingPacketDescriptor : public cClassDescriptor
{
  public:
    EllasticRoutingPacketDescriptor();
    virtual ~EllasticRoutingPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(EllasticRoutingPacketDescriptor);

EllasticRoutingPacketDescriptor::EllasticRoutingPacketDescriptor() : cClassDescriptor("EllasticRoutingPacket", "RoutingPacket")
{
}

EllasticRoutingPacketDescriptor::~EllasticRoutingPacketDescriptor()
{
}

bool EllasticRoutingPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<EllasticRoutingPacket *>(obj)!=NULL;
}

const char *EllasticRoutingPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int EllasticRoutingPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int EllasticRoutingPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *EllasticRoutingPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "source",
        "destination",
        "x_src",
        "y_src",
        "x_dst",
        "y_dst",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int EllasticRoutingPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destination")==0) return base+1;
    if (fieldName[0]=='x' && strcmp(fieldName, "x_src")==0) return base+2;
    if (fieldName[0]=='y' && strcmp(fieldName, "y_src")==0) return base+3;
    if (fieldName[0]=='x' && strcmp(fieldName, "x_dst")==0) return base+4;
    if (fieldName[0]=='y' && strcmp(fieldName, "y_dst")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *EllasticRoutingPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "string",
        "int",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *EllasticRoutingPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int EllasticRoutingPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    EllasticRoutingPacket *pp = (EllasticRoutingPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string EllasticRoutingPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    EllasticRoutingPacket *pp = (EllasticRoutingPacket *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSource());
        case 1: return oppstring2string(pp->getDestination());
        case 2: return long2string(pp->getX_src());
        case 3: return long2string(pp->getY_src());
        case 4: return long2string(pp->getX_dst());
        case 5: return long2string(pp->getY_dst());
        default: return "";
    }
}

bool EllasticRoutingPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    EllasticRoutingPacket *pp = (EllasticRoutingPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setSource((value)); return true;
        case 1: pp->setDestination((value)); return true;
        case 2: pp->setX_src(string2long(value)); return true;
        case 3: pp->setY_src(string2long(value)); return true;
        case 4: pp->setX_dst(string2long(value)); return true;
        case 5: pp->setY_dst(string2long(value)); return true;
        default: return false;
    }
}

const char *EllasticRoutingPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *EllasticRoutingPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    EllasticRoutingPacket *pp = (EllasticRoutingPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


